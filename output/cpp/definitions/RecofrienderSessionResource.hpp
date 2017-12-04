#ifndef SWAGGER_TYPES_RecofrienderSessionResource_HPP
#define SWAGGER_TYPES_RecofrienderSessionResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderSessionResource {
    // 
    uint32_t sessionExpire;
    // 
    std::string sessionState;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderSessionResource& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderSessionResource& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>;
    v.sessionState = j.at("sessionState").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderSessionResource_HPP
