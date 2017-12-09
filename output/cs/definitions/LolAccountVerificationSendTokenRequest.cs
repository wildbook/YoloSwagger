using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolAccountVerificationSendTokenRequest
    {
        [DataMember(Name = "device")]
        public string Device { get; set; }

        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "mediator")]
        public string Mediator { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolAccountVerificationSendTokenRequest {\n");
            sb.Append("  Device: ").Append(Device).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Mediator: ").Append(Mediator).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}