import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mingq/workspace/robocup_raspbot/install/robocup_yolo_v11'
