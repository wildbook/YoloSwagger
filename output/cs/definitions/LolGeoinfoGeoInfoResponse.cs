using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGeoinfoGeoInfoResponse
    {
        [DataMember(Name = "errorMessage")]
        public string ErrorMessage { get; set; }

        [DataMember(Name = "geoInfo")]
        public LolGeoinfoGeoInfo GeoInfo { get; set; }

        [DataMember(Name = "isLatest")]
        public bool IsLatest { get; set; }

        [DataMember(Name = "success")]
        public bool Success { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGeoinfoGeoInfoResponse {\n");
            sb.Append("  ErrorMessage: ").Append(ErrorMessage).Append("\n");
            sb.Append("  GeoInfo: ").Append(GeoInfo).Append("\n");
            sb.Append("  IsLatest: ").Append(IsLatest).Append("\n");
            sb.Append("  Success: ").Append(Success).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}