using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // Represents a cancelled asynchronous operation.
    [DataContract]
    struct BindingAsyncCancelEvent
    {
        // Asynchronous operation token
        [DataMember(Name = "asyncToken")]
        uint AsyncToken { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BindingAsyncCancelEvent {\n");
            sb.Append("  AsyncToken: ").Append(AsyncToken).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}