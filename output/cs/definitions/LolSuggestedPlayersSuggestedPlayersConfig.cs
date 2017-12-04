using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig {
    [DataMember(Name = "Enabled")]
    bool Enabled {get; set;}

    [DataMember(Name = "MaxNumSuggestedPlayers")]
    uint MaxNumSuggestedPlayers {get; set;}

    [DataMember(Name = "FriendsOfFriendsLimit")]
    uint FriendsOfFriendsLimit {get; set;}

    [DataMember(Name = "MaxNumReplacements")]
    uint MaxNumReplacements {get; set;}

    [DataMember(Name = "VicoriousComradesLimit")]
    uint VicoriousComradesLimit {get; set;}

    [DataMember(Name = "FriendsOfFriendsEnabled")]
    bool FriendsOfFriendsEnabled {get; set;}

    [DataMember(Name = "OnlineFriendsLimit")]
    uint OnlineFriendsLimit {get; set;}

    [DataMember(Name = "PreviousPremadesLimit")]
    uint PreviousPremadesLimit {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSuggestedPlayersSuggestedPlayersConfig {\n");
      sb.Append("  Enabled: ").Append(Enabled).Append("\n");
      sb.Append("  MaxNumSuggestedPlayers: ").Append(MaxNumSuggestedPlayers).Append("\n");
      sb.Append("  FriendsOfFriendsLimit: ").Append(FriendsOfFriendsLimit).Append("\n");
      sb.Append("  MaxNumReplacements: ").Append(MaxNumReplacements).Append("\n");
      sb.Append("  VicoriousComradesLimit: ").Append(VicoriousComradesLimit).Append("\n");
      sb.Append("  FriendsOfFriendsEnabled: ").Append(FriendsOfFriendsEnabled).Append("\n");
      sb.Append("  OnlineFriendsLimit: ").Append(OnlineFriendsLimit).Append("\n");
      sb.Append("  PreviousPremadesLimit: ").Append(PreviousPremadesLimit).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}