
import { Component } from '@angular/core';

@Component({
  selector: 'optionBoxes',
  template: `
              <h2>{{ title }}</h2>
              <ul>
                <li *ngFor="let option of options">
                  {{ option }}
                </li>
              <ul>

            `
})

export class OptionBoxesComponent {
  title = "OptionBoxes";
  options = ["Option 1", "Option 2", "Option 3"];
}
