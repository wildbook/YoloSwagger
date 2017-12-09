using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ShutdownLcdsForcedClientShutdown
    {
        [DataMember(Name = "additionalInfo")]
        public string AdditionalInfo { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ShutdownLcdsForcedClientShutdown {\n");
            sb.Append("  AdditionalInfo: ").Append(AdditionalInfo).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}