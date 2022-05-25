import sys
import time
from PyQt5.QtGui import *
class guiholder: 
	def run(self):
		app = QGuiApplication(sys.argv)
		label = label()
		pixmap = QGuiPixmap(sys.argv[1])
		label.setPixmap(pixmap)
		label.show()
		sys.exit(app.exec)
