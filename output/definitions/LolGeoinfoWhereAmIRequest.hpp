#ifndef SWAGGER_TYPES_LolGeoinfoWhereAmIRequest_HPP
#define SWAGGER_TYPES_LolGeoinfoWhereAmIRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGeoinfoWhereAmIRequest {
    // 
    std::string ipAddress;
  };

  void to_json(nlohmann::json& j, const LolGeoinfoWhereAmIRequest& v) {
    j["ipAddress"] = v.ipAddress;
  }

  void from_json(const nlohmann::json& j, LolGeoinfoWhereAmIRequest& v) {
    v.ipAddress = j.at("ipAddress").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoWhereAmIRequest_HPP
