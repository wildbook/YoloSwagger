#ifndef SWAGGER_TYPES_LolClubsPublicSessionResource_HPP
#define SWAGGER_TYPES_LolClubsPublicSessionResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClubsPublicSessionResource {
'    // 
    uint32_t sessionExpire;
    // 
    std::string sessionState;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicSessionResource& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicSessionResource& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>;
    v.sessionState = j.at("sessionState").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicSessionResource_HPP
