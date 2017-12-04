using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolReplaysReplaysConfiguration {
    [DataMember(Name = "minutesUntilReplayConsideredLost")]
    double MinutesUntilReplayConsideredLost {get; set;}

    [DataMember(Name = "gameVersion")]
    string GameVersion {get; set;}

    [DataMember(Name = "isPlayingReplay")]
    bool IsPlayingReplay {get; set;}

    [DataMember(Name = "isReplaysForMatchHistoryEnabled")]
    bool IsReplaysForMatchHistoryEnabled {get; set;}

    [DataMember(Name = "isReplaysForEndOfGameEnabled")]
    bool IsReplaysForEndOfGameEnabled {get; set;}

    [DataMember(Name = "isReplaysEnabled")]
    bool IsReplaysEnabled {get; set;}

    [DataMember(Name = "isPatching")]
    bool IsPatching {get; set;}

    [DataMember(Name = "isLoggedIn")]
    bool IsLoggedIn {get; set;}

    [DataMember(Name = "isPlayingGame")]
    bool IsPlayingGame {get; set;}

    [DataMember(Name = "minServerVersion")]
    string MinServerVersion {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolReplaysReplaysConfiguration {\n");
      sb.Append("  MinutesUntilReplayConsideredLost: ").Append(MinutesUntilReplayConsideredLost).Append("\n");
      sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
      sb.Append("  IsPlayingReplay: ").Append(IsPlayingReplay).Append("\n");
      sb.Append("  IsReplaysForMatchHistoryEnabled: ").Append(IsReplaysForMatchHistoryEnabled).Append("\n");
      sb.Append("  IsReplaysForEndOfGameEnabled: ").Append(IsReplaysForEndOfGameEnabled).Append("\n");
      sb.Append("  IsReplaysEnabled: ").Append(IsReplaysEnabled).Append("\n");
      sb.Append("  IsPatching: ").Append(IsPatching).Append("\n");
      sb.Append("  IsLoggedIn: ").Append(IsLoggedIn).Append("\n");
      sb.Append("  IsPlayingGame: ").Append(IsPlayingGame).Append("\n");
      sb.Append("  MinServerVersion: ").Append(MinServerVersion).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}