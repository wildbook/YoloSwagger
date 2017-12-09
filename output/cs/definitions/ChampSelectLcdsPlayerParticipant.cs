using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsPlayerParticipant
    {
        [DataMember(Name = "pickMode")]
        public int PickMode { get; set; }

        [DataMember(Name = "pickTurn")]
        public int PickTurn { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerInternalName")]
        public string SummonerInternalName { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsPlayerParticipant {\n");
            sb.Append("  PickMode: ").Append(PickMode).Append("\n");
            sb.Append("  PickTurn: ").Append(PickTurn).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}