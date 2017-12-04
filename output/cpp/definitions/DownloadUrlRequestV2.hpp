#ifndef SWAGGER_TYPES_DownloadUrlRequestV2_HPP
#define SWAGGER_TYPES_DownloadUrlRequestV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct DownloadUrlRequestV2 {
    // 
    std::string platformId;
    // 
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const DownloadUrlRequestV2& v) {
    j["platformId"] = v.platformId;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, DownloadUrlRequestV2& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_DownloadUrlRequestV2_HPP
