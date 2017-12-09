using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGeoinfoGeoInfo
    {
        [DataMember(Name = "city")]
        public string City { get; set; }

        [DataMember(Name = "country")]
        public string Country { get; set; }

        [DataMember(Name = "region")]
        public string Region { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGeoinfoGeoInfo {\n");
            sb.Append("  City: ").Append(City).Append("\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}