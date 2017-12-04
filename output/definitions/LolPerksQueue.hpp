#ifndef SWAGGER_TYPES_LolPerksQueue_HPP
#define SWAGGER_TYPES_LolPerksQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksQueue {
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksQueue& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksQueue& v) {
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksQueue_HPP
