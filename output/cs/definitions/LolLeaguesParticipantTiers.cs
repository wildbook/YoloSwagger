using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesParticipantTiers
    {
        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "achievedTiers")]
        LolLeaguesAchievedTier[] AchievedTiers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesParticipantTiers {\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  AchievedTiers: ").Append(AchievedTiers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}