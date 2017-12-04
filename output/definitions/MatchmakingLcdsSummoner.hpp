#ifndef SWAGGER_TYPES_MatchmakingLcdsSummoner_HPP
#define SWAGGER_TYPES_MatchmakingLcdsSummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct MatchmakingLcdsSummoner {
'    // 
    std::string name;
    // 
    uint64_t sumId;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsSummoner& v) {
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsSummoner& v) {
    v.name = j.at("name").get<std::string>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsSummoner_HPP
