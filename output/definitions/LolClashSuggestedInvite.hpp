#ifndef SWAGGER_TYPES_LolClashSuggestedInvite_HPP
#define SWAGGER_TYPES_LolClashSuggestedInvite_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashSuggestedInvite {
'    // 
    uint64_t suggesterSummonerId;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolClashSuggestedInvite& v) {
    j["suggesterSummonerId"] = v.suggesterSummonerId;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolClashSuggestedInvite& v) {
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashSuggestedInvite_HPP
