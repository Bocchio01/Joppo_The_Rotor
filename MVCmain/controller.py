from MVCmain.ABC import ABCController

from MVCmain.view import MainView
from MVCmain.model import Model

from MVCsub.plot import PlotController


class Controller(ABCController):

    def __init__(self, view: MainView, model: Model):
        self.view = view
        self.model = model

        self.register_module(PlotController(self))

    def register_module(self, module):
        self.view.add_view_to_menu_bar(view=module.view)
        self.view.show_target_frame(target_frame=module.view)

    def start(self):
        self.view.start_main_loop()
