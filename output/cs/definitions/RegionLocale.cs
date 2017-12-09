using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RegionLocale
    {
        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "region")]
        public string Region { get; set; }

        [DataMember(Name = "webLanguage")]
        public string WebLanguage { get; set; }

        [DataMember(Name = "webRegion")]
        public string WebRegion { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RegionLocale {\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("  WebLanguage: ").Append(WebLanguage).Append("\n");
            sb.Append("  WebRegion: ").Append(WebRegion).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}