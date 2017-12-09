using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoginUsernameAndPassword
    {
        [DataMember(Name = "password")]
        public string Password { get; set; }

        [DataMember(Name = "username")]
        public string Username { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginUsernameAndPassword {\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}