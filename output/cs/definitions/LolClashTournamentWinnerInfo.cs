using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentWinnerInfo
    {
        [DataMember(Name = "averageWinDuration")]
        public long AverageWinDuration { get; set; }

        [DataMember(Name = "createTime")]
        public long CreateTime { get; set; }

        [DataMember(Name = "logo")]
        public int Logo { get; set; }

        [DataMember(Name = "logoColor")]
        public int LogoColor { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "playerIds")]
        public ulong[] PlayerIds { get; set; }

        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "tier")]
        public int Tier { get; set; }

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