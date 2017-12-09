using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RsoAuthDeviceId
    {
        [DataMember(Name = "collectorServerName")]
        public string CollectorServerName { get; set; }

        [DataMember(Name = "frameUrl")]
        public string FrameUrl { get; set; }

        [DataMember(Name = "installId")]
        public string InstallId { get; set; }

        [DataMember(Name = "merchantId")]
        public string MerchantId { get; set; }

        [DataMember(Name = "sessionId")]
        public string SessionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthDeviceId {\n");
            sb.Append("  CollectorServerName: ").Append(CollectorServerName).Append("\n");
            sb.Append("  FrameUrl: ").Append(FrameUrl).Append("\n");
            sb.Append("  InstallId: ").Append(InstallId).Append("\n");
            sb.Append("  MerchantId: ").Append(MerchantId).Append("\n");
            sb.Append("  SessionId: ").Append(SessionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}