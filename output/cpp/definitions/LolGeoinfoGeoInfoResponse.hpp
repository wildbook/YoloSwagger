#ifndef SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
#define SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
#include <json.hpp>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  // 
  struct LolGeoinfoGeoInfoResponse {
    // 
    LolGeoinfoGeoInfo geoInfo;
    // 
    bool isLatest;
    // 
    std::string errorMessage;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse& v) {
    j["geoInfo"] = v.geoInfo;
    j["isLatest"] = v.isLatest;
    j["errorMessage"] = v.errorMessage;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse& v) {
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>;
    v.isLatest = j.at("isLatest").get<bool>;
    v.errorMessage = j.at("errorMessage").get<std::string>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
