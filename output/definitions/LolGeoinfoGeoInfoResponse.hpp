#ifndef SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
#define SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
#include <json.hpp>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  // 
  struct LolGeoinfoGeoInfoResponse {
    // 
    std::string errorMessage;
    // 
    LolGeoinfoGeoInfo geoInfo;
    // 
    bool isLatest;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse& v) {
    j["errorMessage"] = v.errorMessage;
    j["geoInfo"] = v.geoInfo;
    j["isLatest"] = v.isLatest;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse& v) {
    v.errorMessage = j.at("errorMessage").get<std::string>;
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo>;
    v.isLatest = j.at("isLatest").get<bool>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoGeoInfoResponse_HPP
