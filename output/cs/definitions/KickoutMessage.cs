using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct KickoutMessage
    {
        [DataMember(Name = "message")]
        string Message { get; set; }

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