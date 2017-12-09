using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RsoAuthUserInfo
    {
        [DataMember(Name = "userInfo")]
        public string UserInfo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthUserInfo {\n");
            sb.Append("  UserInfo: ").Append(UserInfo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}