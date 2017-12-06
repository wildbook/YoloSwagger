#pragma once
#include <json.hpp>
#include <optional>
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  struct LolGeoinfoGeoInfoResponse_t {
    bool isLatest;
    LolGeoinfoGeoInfo_t geoInfo;
    std::string errorMessage;
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoResponse_t& v) {
    j["isLatest"] = v.isLatest;
    j["geoInfo"] = v.geoInfo;
    j["errorMessage"] = v.errorMessage;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoResponse_t& v) {
    v.isLatest = j.at("isLatest").get<bool>();
    v.geoInfo = j.at("geoInfo").get<LolGeoinfoGeoInfo_t>();
    v.errorMessage = j.at("errorMessage").get<std::string>();
    v.success = j.at("success").get<bool>();
  }
}
