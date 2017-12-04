#ifndef SWAGGER_TYPES_LolClashChangeIconRequest_HPP
#define SWAGGER_TYPES_LolClashChangeIconRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashChangeIconRequest {
    // 
    int32_t iconColorId;
    // 
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashChangeIconRequest& v) {
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashChangeIconRequest& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.iconId = j.at("iconId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashChangeIconRequest_HPP
