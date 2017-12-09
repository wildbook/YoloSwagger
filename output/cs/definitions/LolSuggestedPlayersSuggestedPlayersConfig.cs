using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersConfig
    {
        [DataMember(Name = "Enabled")]
        public bool Enabled { get; set; }

        [DataMember(Name = "FriendsOfFriendsEnabled")]
        public bool FriendsOfFriendsEnabled { get; set; }

        [DataMember(Name = "FriendsOfFriendsLimit")]
        public uint FriendsOfFriendsLimit { get; set; }

        [DataMember(Name = "MaxNumReplacements")]
        public uint MaxNumReplacements { get; set; }

        [DataMember(Name = "MaxNumSuggestedPlayers")]
        public uint MaxNumSuggestedPlayers { get; set; }

        [DataMember(Name = "OnlineFriendsLimit")]
        public uint OnlineFriendsLimit { get; set; }

        [DataMember(Name = "PreviousPremadesLimit")]
        public uint PreviousPremadesLimit { get; set; }

        [DataMember(Name = "VicoriousComradesLimit")]
        public uint VicoriousComradesLimit { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersConfig {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  FriendsOfFriendsEnabled: ").Append(FriendsOfFriendsEnabled).Append("\n");
            sb.Append("  FriendsOfFriendsLimit: ").Append(FriendsOfFriendsLimit).Append("\n");
            sb.Append("  MaxNumReplacements: ").Append(MaxNumReplacements).Append("\n");
            sb.Append("  MaxNumSuggestedPlayers: ").Append(MaxNumSuggestedPlayers).Append("\n");
            sb.Append("  OnlineFriendsLimit: ").Append(OnlineFriendsLimit).Append("\n");
            sb.Append("  PreviousPremadesLimit: ").Append(PreviousPremadesLimit).Append("\n");
            sb.Append("  VicoriousComradesLimit: ").Append(VicoriousComradesLimit).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}