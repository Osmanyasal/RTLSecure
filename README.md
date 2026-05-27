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
| **AES** (Advanced Encryption Standard) | The standard for modern cryptography. Implementing AES in hardware allows for deep pipelining and loop unrolling. FPGAs can handle multiple parallel AES-GCM streams in the tens of Gbps, vastly outperforming standard CPUs. | - [ ] To Do |
| **ChaCha20** | A high-speed stream cipher. Because it relies entirely on simple ARX (Addition-Rotation-XOR) operations, it routes efficiently on FPGA fabric without needing complex memory blocks. | - [ ] To Do |
| **Lightweight Ciphers** (e.g., ASCON, PRESENT, Simon) | Designed for resource-constrained environments. These have minimal logic footprints, making them easy to drop into a larger block design as an accelerator without eating up all available LUTs. | - [ ] To Do |

---

### 2. Asymmetric-Key Algorithms (Public-Key)

These are used for secure key exchange and digital signatures.

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **ECC** (Elliptic Curve Cryptography) | Curves like Curve25519 are highly efficient in hardware. They provide strong security with much smaller key sizes than RSA, and the underlying finite field arithmetic heavily utilizes the FPGA's DSP slices. | - [ ] To Do |
| **RSA** (Rivest–Shamir–Adleman) | RSA relies on large-integer modular exponentiation. While it consumes a significant amount of area, custom hardware multipliers on the FPGA can drastically reduce latency compared to a software implementation. | - [ ] To Do |

---

### 3. Cryptographic Hash Functions

While technically not encryption algorithms, they are essential primitives for secure systems.

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **SHA-2 / SHA-3** (Keccak) | SHA-3 was specifically designed with hardware efficiency in mind. Its sponge construction maps incredibly well to hardware architectures, offering very high throughput per watt. | - [ ] To Do |

---

### 4. Advanced & Emerging Cryptography

| Algorithm | Description | Status |
|-----------|-------------|--------|
| **Post-Quantum Cryptography (PQC)** (e.g., ML-KEM / CRYSTALS-Kyber) | As these new standards evolve, the algorithm agility of FPGAs is a massive advantage—you can simply flash a new bitstream to support updated algorithms rather than spinning new ASICs. | - [ ] To Do |
| **Fully Homomorphic Encryption (FHE)** (e.g., BGV, CKKS) | Allows computations on encrypted data. Requires massive mathematical overhead, particularly complex polynomial multiplication (NTT/FFT). FPGAs are a primary research target for accelerating these bottlenecks. | - [ ] To Do |
