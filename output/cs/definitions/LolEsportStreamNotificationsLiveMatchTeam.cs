using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsLiveMatchTeam
    {
        [DataMember(Name = "acronym")]
        string Acronym { get; set; }

        [DataMember(Name = "guid")]
        string Guid { get; set; }

        [DataMember(Name = "logoUrl")]
        string LogoUrl { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsLiveMatchTeam {\n");
            sb.Append("  Acronym: ").Append(Acronym).Append("\n");
            sb.Append("  Guid: ").Append(Guid).Append("\n");
            sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}