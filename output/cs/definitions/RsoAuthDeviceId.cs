using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RsoAuthDeviceId {
    [DataMember(Name = "sessionId")]
    string SessionId {get; set;}

    [DataMember(Name = "frameUrl")]
    string FrameUrl {get; set;}

    [DataMember(Name = "installId")]
    string InstallId {get; set;}

    [DataMember(Name = "merchantId")]
    string MerchantId {get; set;}

    [DataMember(Name = "collectorServerName")]
    string CollectorServerName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RsoAuthDeviceId {\n");
      sb.Append("  SessionId: ").Append(SessionId).Append("\n");
      sb.Append("  FrameUrl: ").Append(FrameUrl).Append("\n");
      sb.Append("  InstallId: ").Append(InstallId).Append("\n");
      sb.Append("  MerchantId: ").Append(MerchantId).Append("\n");
      sb.Append("  CollectorServerName: ").Append(CollectorServerName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}