using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashTournamentWinnerInfo
    {
        [DataMember(Name = "averageWinDuration")]
        long AverageWinDuration { get; set; }

        [DataMember(Name = "createTime")]
        long CreateTime { get; set; }

        [DataMember(Name = "logo")]
        int Logo { get; set; }

        [DataMember(Name = "logoColor")]
        int LogoColor { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "playerIds")]
        ulong[] PlayerIds { get; set; }

        [DataMember(Name = "rosterId")]
        long RosterId { get; set; }

        [DataMember(Name = "shortName")]
        string ShortName { get; set; }

        [DataMember(Name = "tier")]
        int Tier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentWinnerInfo {\n");
            sb.Append("  AverageWinDuration: ").Append(AverageWinDuration).Append("\n");
            sb.Append("  CreateTime: ").Append(CreateTime).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PlayerIds: ").Append(PlayerIds).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}