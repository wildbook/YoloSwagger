using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse {
    [DataMember(Name = "geoInfo")]
    LolGeoinfoGeoInfo GeoInfo {get; set;}

    [DataMember(Name = "isLatest")]
    bool IsLatest {get; set;}

    [DataMember(Name = "errorMessage")]
    string ErrorMessage {get; set;}

    [DataMember(Name = "success")]
    bool Success {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGeoinfoGeoInfoResponse {\n");
      sb.Append("  GeoInfo: ").Append(GeoInfo).Append("\n");
      sb.Append("  IsLatest: ").Append(IsLatest).Append("\n");
      sb.Append("  ErrorMessage: ").Append(ErrorMessage).Append("\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}