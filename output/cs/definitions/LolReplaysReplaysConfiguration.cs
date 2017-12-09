using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplaysConfiguration
    {
        [DataMember(Name = "gameVersion")]
        public string GameVersion { get; set; }

        [DataMember(Name = "isLoggedIn")]
        public bool IsLoggedIn { get; set; }

        [DataMember(Name = "isPatching")]
        public bool IsPatching { get; set; }

        [DataMember(Name = "isPlayingGame")]
        public bool IsPlayingGame { get; set; }

        [DataMember(Name = "isPlayingReplay")]
        public bool IsPlayingReplay { get; set; }

        [DataMember(Name = "isReplaysEnabled")]
        public bool IsReplaysEnabled { get; set; }

        [DataMember(Name = "isReplaysForEndOfGameEnabled")]
        public bool IsReplaysForEndOfGameEnabled { get; set; }

        [DataMember(Name = "isReplaysForMatchHistoryEnabled")]
        public bool IsReplaysForMatchHistoryEnabled { get; set; }

        [DataMember(Name = "minServerVersion")]
        public string MinServerVersion { get; set; }

        [DataMember(Name = "minutesUntilReplayConsideredLost")]
        public double MinutesUntilReplayConsideredLost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplaysConfiguration {\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("  IsLoggedIn: ").Append(IsLoggedIn).Append("\n");
            sb.Append("  IsPatching: ").Append(IsPatching).Append("\n");
            sb.Append("  IsPlayingGame: ").Append(IsPlayingGame).Append("\n");
            sb.Append("  IsPlayingReplay: ").Append(IsPlayingReplay).Append("\n");
            sb.Append("  IsReplaysEnabled: ").Append(IsReplaysEnabled).Append("\n");
            sb.Append("  IsReplaysForEndOfGameEnabled: ").Append(IsReplaysForEndOfGameEnabled).Append("\n");
            sb.Append("  IsReplaysForMatchHistoryEnabled: ").Append(IsReplaysForMatchHistoryEnabled).Append("\n");
            sb.Append("  MinServerVersion: ").Append(MinServerVersion).Append("\n");
            sb.Append("  MinutesUntilReplayConsideredLost: ").Append(MinutesUntilReplayConsideredLost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}