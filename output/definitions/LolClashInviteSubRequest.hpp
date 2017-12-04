#ifndef SWAGGER_TYPES_LolClashInviteSubRequest_HPP
#define SWAGGER_TYPES_LolClashInviteSubRequest_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashInviteSubRequest {
'    // 
    uint64_t replacedSummonerId;
    // 
    uint64_t substituteSummonerId;
  };

  void to_json(nlohmann::json& j, const LolClashInviteSubRequest& v) {
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["substituteSummonerId"] = v.substituteSummonerId;
  }

  void from_json(const nlohmann::json& j, LolClashInviteSubRequest& v) {
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>;
    v.substituteSummonerId = j.at("substituteSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashInviteSubRequest_HPP
