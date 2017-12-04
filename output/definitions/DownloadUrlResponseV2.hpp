#ifndef SWAGGER_TYPES_DownloadUrlResponseV2_HPP
#define SWAGGER_TYPES_DownloadUrlResponseV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct DownloadUrlResponseV2 {
    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const DownloadUrlResponseV2& v) {
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, DownloadUrlResponseV2& v) {
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_DownloadUrlResponseV2_HPP
