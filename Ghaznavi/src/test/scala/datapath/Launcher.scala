// See LICENSE.txt for license details.
package datapath

import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val examples = Map(
	"InstructionTypeDecode" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new InstructionTypeDecode(), manager) {
          (c) => new InstructionTypeDecodeTests(c)
        }
      },"control_decode" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new control_decode(), manager) {
          (c) => new control_decodeTests(c)
        }
      },"ALU_control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ALU_control(), manager) {
          (c) => new ALU_controlTests(c)
        }
      },"ImmediateGeneration" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new ImmediateGeneration(), manager) {
          (c) => new immediategenerationTests(c)
        }
      },"alu" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new alu(), manager) {
          (c) => new aluTests(c)
        }
	},"reg_32" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new reg_32(), manager) {
          (c) => new reg_32Tests(c)
        }
	},"control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new control(), manager) {
          (c) => new controlTests(c)
        }
	},"Top" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Top(), manager) {
          (c) => new TopTests(c)
        }
	},"Jalr" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Jalr(), manager) {
          (c) => new JalrTests(c)
        }
	},"PC" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new PC(), manager) {
          (c) => new PCTests(c)
        }
	},"InstructionMemory" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new InstructionMemory(), manager) {
          (c) => new InstructionMemoryTests(c)
        }
	},"DataMemory" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new DataMemory(), manager) {
          (c) => new DataMemoryTests(c)
        }
	}
  )
  def main(args: Array[String]): Unit = {
    TutorialRunner("examples", examples, args)
  }
}

