using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ChampSelectLcdsPlayerParticipant
    {
        [DataMember(Name = "pickMode")]
        int PickMode { get; set; }

        [DataMember(Name = "pickTurn")]
        int PickTurn { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerInternalName")]
        string SummonerInternalName { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

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