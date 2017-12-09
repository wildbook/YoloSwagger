using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyReward
    {
        [DataMember(Name = "premadeSize")]
        public int PremadeSize { get; set; }

        [DataMember(Name = "type")]
        public LolLobbyLobbyPartyRewardType Type { get; set; }

        [DataMember(Name = "value")]
        public string Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyReward {\n");
            sb.Append("  PremadeSize: ").Append(PremadeSize).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}