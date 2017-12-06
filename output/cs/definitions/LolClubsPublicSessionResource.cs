using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClubsPublicSessionResource
    {
        [DataMember(Name = "sessionExpire")]
        uint SessionExpire { get; set; }

        [DataMember(Name = "sessionState")]
        string SessionState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicSessionResource {\n");
            sb.Append("  SessionExpire: ").Append(SessionExpire).Append("\n");
            sb.Append("  SessionState: ").Append(SessionState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}