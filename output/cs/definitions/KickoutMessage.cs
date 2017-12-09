using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct KickoutMessage
    {
        [DataMember(Name = "message")]
        public string Message { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class KickoutMessage {\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}