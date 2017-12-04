#ifndef SWAGGER_TYPES_LolStoreSummoner_HPP
#define SWAGGER_TYPES_LolStoreSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreSummoner {
    // 
    uint64_t acctId;
    // 
    uint64_t sumId;
  };

  void to_json(nlohmann::json& j, const LolStoreSummoner& v) {
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }

  void from_json(const nlohmann::json& j, LolStoreSummoner& v) {
    v.acctId = j.at("acctId").get<uint64_t>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreSummoner_HPP
