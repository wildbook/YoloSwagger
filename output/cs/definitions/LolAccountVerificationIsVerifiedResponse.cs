using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolAccountVerificationIsVerifiedResponse
    {
        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "status")]
        public int Status { get; set; }

        [DataMember(Name = "success")]
        public bool Success { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolAccountVerificationIsVerifiedResponse {\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Success: ").Append(Success).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}