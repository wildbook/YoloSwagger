using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootContextMenu {
    [DataMember(Name = "requiredTokens")]
    string RequiredTokens {get; set;}

    [DataMember(Name = "requiredOthers")]
    string RequiredOthers {get; set;}

    [DataMember(Name = "essenceType")]
    string EssenceType {get; set;}

    [DataMember(Name = "requiredOthersCount")]
    int RequiredOthersCount {get; set;}

    [DataMember(Name = "enabled")]
    bool Enabled {get; set;}

    [DataMember(Name = "requiredOthersName")]
    string RequiredOthersName {get; set;}

    [DataMember(Name = "actionType")]
    string ActionType {get; set;}

    [DataMember(Name = "essenceQuantity")]
    int EssenceQuantity {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootContextMenu {\n");
      sb.Append("  RequiredTokens: ").Append(RequiredTokens).Append("\n");
      sb.Append("  RequiredOthers: ").Append(RequiredOthers).Append("\n");
      sb.Append("  EssenceType: ").Append(EssenceType).Append("\n");
      sb.Append("  RequiredOthersCount: ").Append(RequiredOthersCount).Append("\n");
      sb.Append("  Enabled: ").Append(Enabled).Append("\n");
      sb.Append("  RequiredOthersName: ").Append(RequiredOthersName).Append("\n");
      sb.Append("  ActionType: ").Append(ActionType).Append("\n");
      sb.Append("  EssenceQuantity: ").Append(EssenceQuantity).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}