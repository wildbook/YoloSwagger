using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEmailVerificationEmailUpdate
    {
        [DataMember(Name = "email")]
        public string Email { get; set; }

        [DataMember(Name = "password")]
        public string Password { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEmailVerificationEmailUpdate {\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}