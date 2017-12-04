using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RecofrienderContactStateResource {
    [DataMember(Name = "action")]
    string Action {get; set;}

    [DataMember(Name = "displayState")]
    string DisplayState {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RecofrienderContactStateResource {\n");
      sb.Append("  Action: ").Append(Action).Append("\n");
      sb.Append("  DisplayState: ").Append(DisplayState).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}