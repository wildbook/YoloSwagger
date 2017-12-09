using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RsoAuthAuthError
    {
        [DataMember(Name = "error")]
        public string Error { get; set; }

        [DataMember(Name = "errorDescription")]
        public string ErrorDescription { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthAuthError {\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  ErrorDescription: ").Append(ErrorDescription).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}