using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsEsportsAPI_teams
    {
        [DataMember(Name = "acronym")]
        public string Acronym { get; set; }

        [DataMember(Name = "guid")]
        public string Guid { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "logoUrl")]
        public string LogoUrl { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "slug")]
        public string Slug { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_teams {\n");
            sb.Append("  Acronym: ").Append(Acronym).Append("\n");
            sb.Append("  Guid: ").Append(Guid).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Slug: ").Append(Slug).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}