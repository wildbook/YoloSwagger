using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEmailVerificationEmailVerificationSession
    {
        [DataMember(Name = "email")]
        string Email { get; set; }

        [DataMember(Name = "emailVerified")]
        bool EmailVerified { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEmailVerificationEmailVerificationSession {\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  EmailVerified: ").Append(EmailVerified).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}