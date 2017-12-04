#ifndef SWAGGER_TYPES_LcdsSummoner_HPP
#define SWAGGER_TYPES_LcdsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsSummoner {
    // 
    std::string name;
    // 
    uint64_t sumId;
  };

  void to_json(nlohmann::json& j, const LcdsSummoner& v) {
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }

  void from_json(const nlohmann::json& j, LcdsSummoner& v) {
    v.name = j.at("name").get<std::string>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LcdsSummoner_HPP
