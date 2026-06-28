# RTLSecure
FPGA based encryption/decryption library

FPGAs are fantastic platforms for cryptographic workloads. Their parallel architecture allows for massive throughput and energy optimization. Because of this flexibility, almost any encryption algorithm can be synthesized onto an FPGA using SystemVerilog or VHDL.

The typical approach is a **hardware-software co-design**: a processor (e.g. a custom RISC-V core) handles the control plane and API calls, while dedicated RTL handles the heavy mathematical lifting.

---

## Algorithms

### 1. Symmetric-Key Algorithms (Block & Stream Ciphers)

These algorithms use the same key for encryption and decryption and are the heavy lifters for bulk data transmission.

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **AES** (Advanced Encryption Standard) | The standard for modern cryptography. Implementing AES in hardware allows for deep pipelining and loop unrolling. FPGAs can handle multiple parallel AES-GCM streams in the tens of Gbps, vastly outperforming standard CPUs. | ✅|
| **AES-GCM / GMAC** | These are among the most practical FPGA cryptographic building blocks because they combine AES with finite-field authentication that can be heavily pipelined. They are common choices for secure links, storage engines, and line-rate packet processing. | - [ ] To Do |
| **ASCON** | The NIST lightweight cryptography standard is an excellent FPGA target because it is built from a compact permutation with simple bitwise operations. It offers authenticated encryption with a very small area footprint, making it well suited for secure embedded and streaming designs. | - [ ] To Do |
| **Feistel Cipher** | The foundational network structure underlying DES and many other block ciphers. A generic Feistel core in RTL provides a reusable, parameterisable building block where the round function can be swapped in or out without restructuring the pipeline. | ✅|
| **ChaCha20** | A high-speed stream cipher. Because it relies entirely on simple ARX (Addition-Rotation-XOR) operations, it routes efficiently on FPGA fabric without needing complex memory blocks. | - [ ] To Do |
| **PRESENT** | PRESENT is a classic ultra-lightweight block cipher with a very small hardware footprint. It is useful as a reference design when the priority is minimal area and simple round logic rather than peak throughput or long-term algorithm agility. | - [ ] To Do |
| **GIFT** | GIFT is widely regarded as a stronger modern lightweight hardware candidate than many older small-footprint ciphers. Its bit-permutation structure and compact round function make it a good fit for FPGA implementations targeting low area and clean timing closure. | - [ ] To Do |
| **SKINNY** | SKINNY was designed for efficient hardware and software implementations, with a structure that scales well across lightweight authenticated and tweakable constructions. It is a sensible FPGA target for experimentation with compact block-cipher datapaths and related primitives. | - [ ] To Do |

---

### 2. Asymmetric-Key Algorithms (Public-Key)

These are used for secure key exchange and digital signatures.

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **X25519 / Curve25519** | Modern elliptic-curve key exchange is far more attractive than RSA for FPGA implementation. It delivers strong security with smaller operands, cleaner datapaths, and efficient reuse of modular arithmetic blocks across secure communication designs. | - [ ] To Do |
| **Ed25519 / ECDSA** | Digital signature engines based on modern elliptic curves are practical RTL targets for secure boot, firmware authentication, and attestation. They offer a better performance-per-area tradeoff than legacy public-key schemes in most FPGA systems. | - [ ] To Do |
| **ML-KEM / ML-DSA** | Lattice-based post-quantum schemes are compelling hardware candidates because much of the workload reduces to structured polynomial arithmetic and NTT-style datapaths. They are more aligned with forward-looking FPGA acceleration than legacy large-integer schemes. | - [ ] To Do |

---

### 3. Cryptographic Hash Functions

While technically not encryption algorithms, they are essential primitives for secure systems.

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **SHA-3 / Keccak** | Keccak's sponge construction is one of the best matches for RTL implementation. Its round-based permutation maps cleanly to FPGA datapaths and supports hashing, XOF modes, and authenticated designs with strong throughput-per-area characteristics. | - [ ] To Do |
| **BLAKE2s / BLAKE3** | These hashes are attractive in digital design because they rely on add, rotate, and XOR primitives rather than large lookup structures. They are good candidates for high-throughput FPGA pipelines and parallel tree-hash architectures. | - [ ] To Do |
| **ASCON-Hash / XOF** | The hash and extendable-output variants of ASCON reuse the same compact permutation style as the cipher family. That makes them especially suitable for low-area FPGA designs that want a consistent lightweight cryptographic core. | - [ ] To Do |

---

### 4. Advanced & Emerging Cryptography

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **PQC Arithmetic Accelerators** | Shared engines for NTT, modular reduction, and polynomial multiply are strong FPGA design targets because they can be reused across ML-KEM, ML-DSA, and related lattice schemes. This is often the most practical way to add post-quantum support to an RTL library. | - [ ] To Do |
| **True Random Number Generators (TRNGs) / DRBG Support** | Practical hardware cryptography depends on high-quality randomness and key generation infrastructure, not just ciphers. FPGA-friendly entropy sources, conditioning logic, and deterministic random bit generators are foundational blocks for any serious secure design. | - [ ] To Do |
